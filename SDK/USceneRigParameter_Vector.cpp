#include "FVector.hpp"
#include "USceneRigParameter.hpp"
#include "USceneRigParameter_Vector.hpp"
USceneRigParameter_Vector* USceneRigParameter_Vector::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameter_Vector");
    return (USceneRigParameter_Vector*)res;
}
