// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaLinearElasticity_HeaderFile
#define _StepFEA_FeaLinearElasticity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaLinearElasticity_HeaderFile
#include <Handle_StepFEA_FeaLinearElasticity.hxx>
#endif

#ifndef _StepFEA_SymmetricTensor43d_HeaderFile
#include <StepFEA_SymmetricTensor43d.hxx>
#endif
#ifndef _StepFEA_FeaMaterialPropertyRepresentationItem_HeaderFile
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class StepFEA_SymmetricTensor43d;


//! Representation of STEP entity FeaLinearElasticity <br>
class StepFEA_FeaLinearElasticity : public StepFEA_FeaMaterialPropertyRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaLinearElasticity();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const StepFEA_SymmetricTensor43d& aFeaConstants) ;
  //! Returns field FeaConstants <br>
  Standard_EXPORT     StepFEA_SymmetricTensor43d FeaConstants() const;
  //! Set field FeaConstants <br>
  Standard_EXPORT     void SetFeaConstants(const StepFEA_SymmetricTensor43d& FeaConstants) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaLinearElasticity)

protected:




private: 


StepFEA_SymmetricTensor43d theFeaConstants;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif