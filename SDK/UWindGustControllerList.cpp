#include "UWindGustController.hpp"
#include "UWindGustControllerList.hpp"
UWindGustControllerList* UWindGustControllerList::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindGustControllerList");
    return (UWindGustControllerList*)res;
}
