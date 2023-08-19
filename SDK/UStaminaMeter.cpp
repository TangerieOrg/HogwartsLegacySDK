#include "UStaminaMeter.hpp"
#include "UUserWidget.hpp"
UStaminaMeter* UStaminaMeter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StaminaMeter");
    return (UStaminaMeter*)res;
}
