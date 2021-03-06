// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_PntOnFace_HeaderFile
#define _IntTools_PntOnFace_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Real.hxx>
#include <TopoDS_Face.hxx>
class TopoDS_Face;
class gp_Pnt;


//! Contains a Face, a 3d point, corresponded UV parameters and a flag
class IntTools_PntOnFace 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Empty constructor
  Standard_EXPORT IntTools_PntOnFace();
  

  //! Initializes me by aFace, a 3d point
  //! and it's UV parameters on face
  Standard_EXPORT   void Init (const TopoDS_Face& aF, const gp_Pnt& aP, const Standard_Real U, const Standard_Real V) ;
  

  //! Modifier
  Standard_EXPORT   void SetFace (const TopoDS_Face& aF) ;
  

  //! Modifier
  Standard_EXPORT   void SetPnt (const gp_Pnt& aP) ;
  

  //! Modifier
  Standard_EXPORT   void SetParameters (const Standard_Real U, const Standard_Real V) ;
  

  //! Modifier
  Standard_EXPORT   void SetValid (const Standard_Boolean bF) ;
  

  //! Selector
  Standard_EXPORT   Standard_Boolean Valid()  const;
  

  //! Selector
  Standard_EXPORT  const  TopoDS_Face& Face()  const;
  

  //! Selector
  Standard_EXPORT  const  gp_Pnt& Pnt()  const;
  

  //! Selector
  Standard_EXPORT   void Parameters (Standard_Real& U, Standard_Real& V)  const;
  

  //! Selector
  Standard_EXPORT   Standard_Boolean IsValid()  const;




protected:





private:



  Standard_Boolean myIsValid;
  gp_Pnt myPnt;
  Standard_Real myU;
  Standard_Real myV;
  TopoDS_Face myFace;


};







#endif // _IntTools_PntOnFace_HeaderFile
