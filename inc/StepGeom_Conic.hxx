// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Conic_HeaderFile
#define _StepGeom_Conic_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_Conic.hxx>

#include <StepGeom_Axis2Placement.hxx>
#include <StepGeom_Curve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;



class StepGeom_Conic : public StepGeom_Curve
{

public:

  
  //! Returns a Conic
  Standard_EXPORT StepGeom_Conic();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT   void SetPosition (const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT   StepGeom_Axis2Placement Position()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Conic)

protected:




private: 


  StepGeom_Axis2Placement position;


};







#endif // _StepGeom_Conic_HeaderFile
