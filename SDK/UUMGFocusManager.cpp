#include "AUMGInputManager.hpp"
#include "UObject.hpp"
#include "UUMGFocusManager.hpp"
UUMGFocusManager* UUMGFocusManager::StaticClass() {
    static auto res = find_uobject("Class /Script/UMGFocus.UMGFocusManager");
    return (UUMGFocusManager*)res;
}
