
#include <string>

namespace rval {
    class MetaData {
    public:
        MetaData();
        MetaData(const wchar_t* lpszName);
        MetaData(const MetaData& other);
        MetaData(MetaData&& other) noexcept;


    private:
        std::wstring _name;
    };
    class TestMoveConstruct {
    public:
        ~TestMoveConstruct();
        TestMoveConstruct();
        TestMoveConstruct(const TestMoveConstruct& other);
        TestMoveConstruct(TestMoveConstruct&& other) noexcept;

        TestMoveConstruct operator=(const TestMoveConstruct& other);

    private:
        MetaData _meta;
    };
} // namespace rval {
