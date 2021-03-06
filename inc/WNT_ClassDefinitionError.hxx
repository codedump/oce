// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_ClassDefinitionError_HeaderFile
#define _WNT_ClassDefinitionError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_ConstructionError.hxx>
#include <Handle_WNT_ClassDefinitionError.hxx>

#if !defined No_Exception && !defined No_WNT_ClassDefinitionError
  #define WNT_ClassDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) WNT_ClassDefinitionError::Raise(MESSAGE);
#else
  #define WNT_ClassDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(WNT_ClassDefinitionError, Standard_ConstructionError)

#endif // _WNT_ClassDefinitionError_HeaderFile
