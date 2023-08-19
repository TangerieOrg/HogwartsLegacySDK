#include "USceneActionState_EmissiveAdaptationBase.hpp"
#include "USceneActionState_EmissiveAdaptationExtras.hpp"
USceneActionState_EmissiveAdaptationExtras* USceneActionState_EmissiveAdaptationExtras::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_EmissiveAdaptationExtras");
    return (USceneActionState_EmissiveAdaptationExtras*)res;
}
