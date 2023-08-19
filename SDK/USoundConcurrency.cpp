#include "FSoundConcurrencySettings.hpp"
#include "UObject.hpp"
#include "USoundConcurrency.hpp"
USoundConcurrency* USoundConcurrency::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundConcurrency");
    return (USoundConcurrency*)res;
}
