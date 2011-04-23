// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepExtrema_Poly_HeaderFile
#define _BRepExtrema_Poly_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class gp_Pnt;



class BRepExtrema_Poly  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! returns Standard_True if OK. <br>
  Standard_EXPORT   static  Standard_Boolean Distance(const TopoDS_Shape& S1,const TopoDS_Shape& S2,gp_Pnt& P1,gp_Pnt& P2,Standard_Real& dist) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif