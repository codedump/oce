// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Axis2Placement_HeaderFile
#define _StepGeom_Axis2Placement_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepGeom_Axis2Placement2d.hxx>
#include <Handle_StepGeom_Axis2Placement3d.hxx>
class Standard_Transient;
class StepGeom_Axis2Placement2d;
class StepGeom_Axis2Placement3d;



class StepGeom_Axis2Placement  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a Axis2Placement SelectType
  Standard_EXPORT StepGeom_Axis2Placement();
  
  //! Recognizes a Axis2Placement Kind Entity that is :
  //! 1 -> Axis2Placement2d
  //! 2 -> Axis2Placement3d
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! returns Value as a Axis2Placement2d (Null if another type)
  Standard_EXPORT   Handle(StepGeom_Axis2Placement2d) Axis2Placement2d()  const;
  
  //! returns Value as a Axis2Placement3d (Null if another type)
  Standard_EXPORT   Handle(StepGeom_Axis2Placement3d) Axis2Placement3d()  const;




protected:





private:





};







#endif // _StepGeom_Axis2Placement_HeaderFile
