// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfPoints_HeaderFile
#define _Graphic3d_ArrayOfPoints_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_ArrayOfPoints.hxx>

#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>


//! Contains points array definition
class Graphic3d_ArrayOfPoints : public Graphic3d_ArrayOfPrimitives
{

public:

  
  //! Creates an array of points,
  //! a single pixel point is drawn at each vertex.
  //! The array must be filled using the AddVertex(Point) method.
  //! When <hasVColors> is TRUE , you must use only AddVertex(Point,Color) method.
  //! When <hasVNormals> is TRUE , you must use only AddVertex(Point,Normal) method.
  Standard_EXPORT Graphic3d_ArrayOfPoints(const Standard_Integer maxVertexs, const Standard_Boolean hasVColors = Standard_False, const Standard_Boolean hasVNormals = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfPoints)

protected:




private: 




};







#endif // _Graphic3d_ArrayOfPoints_HeaderFile
