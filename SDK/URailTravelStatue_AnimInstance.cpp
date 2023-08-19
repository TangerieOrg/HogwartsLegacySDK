#include "UAnimInstance.hpp"
#include "URailTravelStatue_AnimInstance.hpp"
URailTravelStatue_AnimInstance* URailTravelStatue_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RailTravelStatue_AnimInstance");
    return (URailTravelStatue_AnimInstance*)res;
}
