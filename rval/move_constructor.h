
namespace rval {
    class TestMoveConstruct {
        public:
            ~TestMoveConstruct();
            TestMoveConstruct();
            TestMoveConstruct(const TestMoveConstruct & other);
            TestMoveConstruct(const TestMoveConstruct && other);
    };
} // namespace rval {
