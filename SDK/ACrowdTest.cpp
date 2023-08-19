#include "AActor.hpp"
#include "ACrowdTest.hpp"
ACrowdTest* ACrowdTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CrowdTest");
    return (ACrowdTest*)res;
}
