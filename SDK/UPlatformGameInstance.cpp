#include "UGameInstance.hpp"
#include "UPlatformGameInstance.hpp"
UPlatformGameInstance* UPlatformGameInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlatformGameInstance");
    return (UPlatformGameInstance*)res;
}
