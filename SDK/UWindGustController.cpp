#include "UObject.hpp"
#include "UWindGustController.hpp"
UWindGustController* UWindGustController::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindGustController");
    return (UWindGustController*)res;
}
