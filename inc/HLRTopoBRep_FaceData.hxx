// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTopoBRep_FaceData_HeaderFile
#define _HLRTopoBRep_FaceData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
class TopTools_ListOfShape;


//! Contains the  3 ListOfShape of  a Face  ( Internal <br>
//!          OutLines, OutLines on restriction and IsoLines ). <br>
class HLRTopoBRep_FaceData  {
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

  
  Standard_EXPORT   HLRTopoBRep_FaceData();
  
       const TopTools_ListOfShape& FaceIntL() const;
  
       const TopTools_ListOfShape& FaceOutL() const;
  
       const TopTools_ListOfShape& FaceIsoL() const;
  
        TopTools_ListOfShape& AddIntL() ;
  
        TopTools_ListOfShape& AddOutL() ;
  
        TopTools_ListOfShape& AddIsoL() ;





protected:





private:



TopTools_ListOfShape myIntL;
TopTools_ListOfShape myOutL;
TopTools_ListOfShape myIsoL;


};


#include <HLRTopoBRep_FaceData.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif