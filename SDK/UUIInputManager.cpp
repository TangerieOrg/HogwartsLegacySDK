#include "UObject.hpp"
#include "UUIInputManager.hpp"
UUIInputManager* UUIInputManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIInputManager");
    return (UUIInputManager*)res;
}
