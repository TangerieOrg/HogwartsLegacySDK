#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_SocialFabric.hpp"
UEnvQueryTest_SocialFabric* UEnvQueryTest_SocialFabric::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_SocialFabric");
    return (UEnvQueryTest_SocialFabric*)res;
}
