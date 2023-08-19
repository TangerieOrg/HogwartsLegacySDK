#include "UAblStartPositionGetter.hpp"
#include "UObject.hpp"
UAblStartPositionGetter* UAblStartPositionGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblStartPositionGetter");
    return (UAblStartPositionGetter*)res;
}
