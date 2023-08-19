#include "FSceneRigParameterBinding_Int.hpp"
#include "UIntProvider.hpp"
#include "UInt_SceneRigParameter.hpp"
UInt_SceneRigParameter* UInt_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Int_SceneRigParameter");
    return (UInt_SceneRigParameter*)res;
}
