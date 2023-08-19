#include "UEnvQueryTest.hpp"
#include "UMercunaQueryTest.hpp"
UMercunaQueryTest* UMercunaQueryTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaQueryTest");
    return (UMercunaQueryTest*)res;
}
