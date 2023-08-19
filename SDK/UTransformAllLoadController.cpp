#include "UObject.hpp"
#include "UTransformAllLoadController.hpp"
UTransformAllLoadController* UTransformAllLoadController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformAllLoadController");
    return (UTransformAllLoadController*)res;
}
