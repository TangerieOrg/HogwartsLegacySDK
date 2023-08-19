#include "FTouchInputControl.hpp"
#include "UObject.hpp"
#include "UTouchInterface.hpp"
UTouchInterface* UTouchInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TouchInterface");
    return (UTouchInterface*)res;
}
