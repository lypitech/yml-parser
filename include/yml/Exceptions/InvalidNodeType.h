#pragma once

#include <format>
#include <stdexcept>

namespace yml::exception
{

    class InvalidNodeType final
        : std::runtime_error
    {
    public:
        explicit InvalidNodeType(
            const std::string& name,
            const std::string& type
        )
            : std::runtime_error(std::format(
                "{} - {}: Invalid node type.",
                name, type
            ))
        {}
    };

}
