#include "UGameSessionSettings.hpp"
#include "UObject.hpp"
UGameSessionSettings* UGameSessionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.GameSessionSettings");
    return (UGameSessionSettings*)res;
}
