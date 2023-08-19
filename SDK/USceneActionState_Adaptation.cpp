#include "FEmissiveAdaptationFinalState.hpp"
#include "USceneActionState_Adaptation.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_Adaptation* USceneActionState_Adaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_Adaptation");
    return (USceneActionState_Adaptation*)res;
}
