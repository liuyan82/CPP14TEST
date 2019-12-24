#include <iostream>
#include "move_constructor.h"
namespace rval {

    MetaData::MetaData() {
        std::cout << "Metadata Default Construct" << std::endl;
    }

    MetaData::MetaData(const wchar_t* lpszName) : _name(lpszName) {
        std::cout << "Metadata Name Construct" << std::endl;
    }

    MetaData::MetaData(const MetaData& other) {
        std::cout << "Metadata Copy Construct" << std::endl;
    }

    MetaData::MetaData(MetaData&& other) noexcept {
        std::cout << "Metadata Move Construct" << std::endl;
    }


    ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////

    TestMoveConstruct::~TestMoveConstruct() {
        std::cout << "TestMoveConstruct Destruct" << std::endl;
    }

    TestMoveConstruct::TestMoveConstruct() : _meta(L"test") {
        std::cout << "TestMoveConstruct Default Construct" << std::endl;
    }

    TestMoveConstruct::TestMoveConstruct(const TestMoveConstruct& other) :_meta(other._meta) {
        std::cout << "TestMoveConstruct Copy Construct" << std::endl;
    }

    TestMoveConstruct::TestMoveConstruct(TestMoveConstruct&& other) noexcept: _meta(other._meta)  {
        std::cout << "TestMoveConstruct Move Construct" << std::endl;
    }

    TestMoveConstruct TestMoveConstruct::operator=(const TestMoveConstruct& other)
    {
        std::cout << "TestMoveConstruct assign operator" << std::endl;
        return TestMoveConstruct(other);
    }

} // namespace rval {
