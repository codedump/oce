// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapNodeOfPointVertexMap_HeaderFile
#define _StepToTopoDS_DataMapNodeOfPointVertexMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepToTopoDS_DataMapNodeOfPointVertexMap.hxx>

#include <Handle_StepGeom_CartesianPoint.hxx>
#include <TopoDS_Vertex.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class StepGeom_CartesianPoint;
class TopoDS_Vertex;
class StepToTopoDS_CartesianPointHasher;
class StepToTopoDS_PointVertexMap;
class StepToTopoDS_DataMapIteratorOfPointVertexMap;



class StepToTopoDS_DataMapNodeOfPointVertexMap : public TCollection_MapNode
{

public:

  
    StepToTopoDS_DataMapNodeOfPointVertexMap(const Handle(StepGeom_CartesianPoint)& K, const TopoDS_Vertex& I, const TCollection_MapNodePtr& n);
  
      Handle(StepGeom_CartesianPoint)& Key()  const;
  
      TopoDS_Vertex& Value()  const;




  DEFINE_STANDARD_RTTI(StepToTopoDS_DataMapNodeOfPointVertexMap)

protected:




private: 


  Handle(StepGeom_CartesianPoint) myKey;
  TopoDS_Vertex myValue;


};

#define TheKey Handle(StepGeom_CartesianPoint)
#define TheKey_hxx <StepGeom_CartesianPoint.hxx>
#define TheItem TopoDS_Vertex
#define TheItem_hxx <TopoDS_Vertex.hxx>
#define Hasher StepToTopoDS_CartesianPointHasher
#define Hasher_hxx <StepToTopoDS_CartesianPointHasher.hxx>
#define TCollection_DataMapNode StepToTopoDS_DataMapNodeOfPointVertexMap
#define TCollection_DataMapNode_hxx <StepToTopoDS_DataMapNodeOfPointVertexMap.hxx>
#define TCollection_DataMapIterator StepToTopoDS_DataMapIteratorOfPointVertexMap
#define TCollection_DataMapIterator_hxx <StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx>
#define Handle_TCollection_DataMapNode Handle_StepToTopoDS_DataMapNodeOfPointVertexMap
#define TCollection_DataMapNode_Type_() StepToTopoDS_DataMapNodeOfPointVertexMap_Type_()
#define TCollection_DataMap StepToTopoDS_PointVertexMap
#define TCollection_DataMap_hxx <StepToTopoDS_PointVertexMap.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _StepToTopoDS_DataMapNodeOfPointVertexMap_HeaderFile
