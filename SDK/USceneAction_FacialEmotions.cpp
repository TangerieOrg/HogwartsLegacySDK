#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "USceneAction_FacialEmotions.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_FacialEmotions* USceneAction_FacialEmotions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_FacialEmotions");
    return (USceneAction_FacialEmotions*)res;
}
