#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_Protego.hpp"
UAblStartPositionGetter_Protego* UAblStartPositionGetter_Protego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_Protego");
    return (UAblStartPositionGetter_Protego*)res;
}
