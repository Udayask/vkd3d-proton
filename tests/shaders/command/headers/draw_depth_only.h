static const DWORD draw_depth_only_code_dxbc[] =
{
    0x43425844, 0xfba86f53, 0x2dbe5300, 0x701a033f, 0xcfe54bd7, 0x00000001, 0x000000b4, 0x00000003,
    0x0000002c, 0x0000003c, 0x00000070, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003, 0xffffffff,
    0x00000e01, 0x445f5653, 0x68747065, 0xababab00, 0x58454853, 0x0000003c, 0x00000050, 0x0000000f,
    0x0100086a, 0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x02000065, 0x0000c001, 0x05000036,
    0x0000c001, 0x0020800a, 0x00000000, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE draw_depth_only_dxbc = { draw_depth_only_code_dxbc, sizeof(draw_depth_only_code_dxbc) };
#undef UNUSED_ARRAY_ATTR