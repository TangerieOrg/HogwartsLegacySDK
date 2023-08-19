#include "FPostProcessSettings.hpp"
#include "USceneActionState_PostProcessing.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PostProcessing* USceneActionState_PostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PostProcessing");
    return (USceneActionState_PostProcessing*)res;
}
