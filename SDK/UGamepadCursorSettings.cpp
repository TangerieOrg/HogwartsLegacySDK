#include "FRuntimeFloatCurve.hpp"
#include "UDeveloperSettings.hpp"
#include "UGamepadCursorSettings.hpp"
UGamepadCursorSettings* UGamepadCursorSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GamepadCursorSettings");
    return (UGamepadCursorSettings*)res;
}
