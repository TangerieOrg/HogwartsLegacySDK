#include "UCommandlet.hpp"
#include "USmokeTestCommandlet.hpp"
USmokeTestCommandlet* USmokeTestCommandlet::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SmokeTestCommandlet");
    return (USmokeTestCommandlet*)res;
}
