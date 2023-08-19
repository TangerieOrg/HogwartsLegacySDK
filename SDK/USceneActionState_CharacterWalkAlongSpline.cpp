#include "USceneActionState_CharacterWalkAlongSpline.hpp"
#include "USceneActionState_CharacterWalkBase.hpp"
USceneActionState_CharacterWalkAlongSpline* USceneActionState_CharacterWalkAlongSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CharacterWalkAlongSpline");
    return (USceneActionState_CharacterWalkAlongSpline*)res;
}
