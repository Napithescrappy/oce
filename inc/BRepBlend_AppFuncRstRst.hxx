// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_AppFuncRstRst_HeaderFile
#define _BRepBlend_AppFuncRstRst_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepBlend_AppFuncRstRst_HeaderFile
#include <Handle_BRepBlend_AppFuncRstRst.hxx>
#endif

#ifndef _BRepBlend_AppFuncRoot_HeaderFile
#include <BRepBlend_AppFuncRoot.hxx>
#endif
#ifndef _Handle_BRepBlend_Line_HeaderFile
#include <Handle_BRepBlend_Line.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_OutOfRange;
class BRepBlend_Line;
class Blend_RstRstFunction;
class Blend_AppFunction;
class math_Vector;
class Blend_Point;


//! Function to approximate by AppSurface for Edge/Face <br>
class BRepBlend_AppFuncRstRst : public BRepBlend_AppFuncRoot {

public:

  
  Standard_EXPORT   BRepBlend_AppFuncRstRst(Handle(BRepBlend_Line)& Line,Blend_RstRstFunction& Func,const Standard_Real Tol3d,const Standard_Real Tol2d);
  
  Standard_EXPORT     void Point(const Blend_AppFunction& Func,const Standard_Real Param,const math_Vector& Sol,Blend_Point& Pnt) const;
  
  Standard_EXPORT     void Vec(math_Vector& Sol,const Blend_Point& Pnt) const;




  DEFINE_STANDARD_RTTI(BRepBlend_AppFuncRstRst)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif