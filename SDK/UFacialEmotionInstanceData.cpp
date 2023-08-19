#include "UFacialEmotionInstanceData.hpp"
#include "UObject.hpp"
UFacialEmotionInstanceData* UFacialEmotionInstanceData::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.FacialEmotionInstanceData");
    return (UFacialEmotionInstanceData*)res;
}
