#include "ETrollSwingDirection.hpp"
#include "UAnimNotify.hpp"
#include "UTrollSwingDirectionAnimNotify.hpp"
UTrollSwingDirectionAnimNotify* UTrollSwingDirectionAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrollSwingDirectionAnimNotify");
    return (UTrollSwingDirectionAnimNotify*)res;
}
