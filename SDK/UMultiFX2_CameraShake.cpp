#include "UClass.hpp"
#include "UMultiFX2_CameraShake.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_CameraShake* UMultiFX2_CameraShake::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_CameraShake");
    return (UMultiFX2_CameraShake*)res;
}
