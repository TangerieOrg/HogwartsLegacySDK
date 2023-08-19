#include "FBox.hpp"
#include "FPostProcessSettings.hpp"
#include "UCameraAnim.hpp"
#include "UInterpGroup.hpp"
#include "UObject.hpp"
UCameraAnim* UCameraAnim::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraAnim");
    return (UCameraAnim*)res;
}
