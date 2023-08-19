#include "UAblObjectArchitectTagChooser.hpp"
#include "UObject.hpp"
UAblObjectArchitectTagChooser* UAblObjectArchitectTagChooser::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblObjectArchitectTagChooser");
    return (UAblObjectArchitectTagChooser*)res;
}
