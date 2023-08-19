#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_SocialGreetScore.hpp"
UEnvQueryTest_SocialGreetScore* UEnvQueryTest_SocialGreetScore::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryTest_SocialGreetScore");
    return (UEnvQueryTest_SocialGreetScore*)res;
}
