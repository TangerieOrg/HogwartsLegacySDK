#include "UEngine.hpp"
#include "UGameEngine.hpp"
#include "UGameInstance.hpp"
UGameEngine* UGameEngine::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameEngine");
    return (UGameEngine*)res;
}
