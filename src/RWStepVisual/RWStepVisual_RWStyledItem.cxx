
#include <RWStepVisual_RWStyledItem.ixx>
#include <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepRepr_RepresentationItem.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepVisual_StyledItem.hxx>


RWStepVisual_RWStyledItem::RWStepVisual_RWStyledItem () {}

void RWStepVisual_RWStyledItem::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepVisual_StyledItem)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"styled_item")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : styles ---

	Handle(StepVisual_HArray1OfPresentationStyleAssignment) aStyles;
	Handle(StepVisual_PresentationStyleAssignment) anent2;
	Standard_Integer nsub2;
	if (data->ReadSubList (num,2,"styles",ach,nsub2)) {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  aStyles = new StepVisual_HArray1OfPresentationStyleAssignment (1, nb2);
	  for (Standard_Integer i2 = 1; i2 <= nb2; i2 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	    if (data->ReadEntity (nsub2, i2,"presentation_style_assignment", ach,
				  STANDARD_TYPE(StepVisual_PresentationStyleAssignment), anent2))
	      aStyles->SetValue(i2, anent2);
	  }
	}

	// --- own field : item ---

	Handle(StepRepr_RepresentationItem) aItem;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"item", ach, STANDARD_TYPE(StepRepr_RepresentationItem), aItem);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aStyles, aItem);
}


void RWStepVisual_RWStyledItem::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepVisual_StyledItem)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : styles ---

	SW.OpenSub();
	for (Standard_Integer i2 = 1;  i2 <= ent->NbStyles();  i2 ++) {
	  SW.Send(ent->StylesValue(i2));
	}
	SW.CloseSub();

	// --- own field : item ---

	SW.Send(ent->Item());
}


void RWStepVisual_RWStyledItem::Share(const Handle(StepVisual_StyledItem)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbStyles();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->StylesValue(is1));
	}



	iter.GetOneItem(ent->Item());
}
