static const uint8_t fs_imgui_cubemap_glsl[578] =
{
	0x46, 0x53, 0x48, 0x03, 0xe3, 0xc2, 0x5c, 0x65, 0x00, 0x00, 0x33, 0x02, 0x00, 0x00, 0x6c, 0x6f, // FSH....e..3...lo
	0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x6d, 0x70, 0x6c, 0x5f, 0x6c, 0x6f, 0x77, // wp vec4 impl_low
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x4c, 0x6f, 0x64, 0x20, // _textureCubeLod 
	0x20, 0x20, 0x28, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, //   (lowp samplerC
	0x75, 0x62, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x68, 0x69, 0x67, // ube sampler, hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2c, 0x20, 0x6d, // hp vec3 coord, m
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6c, 0x6f, 0x64, // ediump float lod
	0x29, 0x0a, 0x7b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, // ).{.#if defined(
	0x47, 0x4c, 0x5f, 0x45, 0x58, 0x54, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x65, 0x72, 0x5f, 0x74, 0x65, // GL_EXT_shader_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x5f, 0x6c, 0x6f, 0x64, 0x29, 0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, // xture_lod)..retu
	0x72, 0x6e, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x4c, 0x6f, // rn textureCubeLo
	0x64, 0x20, 0x20, 0x20, 0x28, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x63, 0x6f, // d   (sampler, co
	0x6f, 0x72, 0x64, 0x2c, 0x20, 0x6c, 0x6f, 0x64, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, // ord, lod);.#else
	0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // ..return texture
	0x43, 0x75, 0x62, 0x65, 0x28, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x63, 0x6f, // Cube(sampler, co
	0x6f, 0x72, 0x64, 0x2c, 0x20, 0x6c, 0x6f, 0x64, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, // ord, lod);.#endi
	0x66, 0x0a, 0x7d, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, // f.}..varying hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // hp vec3 v_normal
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ;.uniform highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, // vec4 u_imageLodE
	0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // nabled;.uniform 
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, 0x65, // lowp samplerCube
	0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, //  s_texColor;.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, // d main ().{.  lo
	0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // wp vec4 tmpvar_1
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, // ;.  tmpvar_1.xyz
	0x20, 0x3d, 0x20, 0x69, 0x6d, 0x70, 0x6c, 0x5f, 0x6c, 0x6f, 0x77, 0x5f, 0x74, 0x65, 0x78, 0x74, //  = impl_low_text
	0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x73, // ureCubeLod    (s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // _texColor, v_nor
	0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, // mal, u_imageLodE
	0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x78, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, // nabled.x).xyz;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, //  tmpvar_1.w = (0
	0x2e, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x38, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x69, 0x6d, // .2 + (0.8 * u_im
	0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x79, 0x29, // ageLodEnabled.y)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, // );.  gl_FragColo
	0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, // r = tmpvar_1;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t fs_imgui_cubemap_dx9[373] =
{
	0x46, 0x53, 0x48, 0x03, 0xe3, 0xc2, 0x5c, 0x65, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x15, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x50, 0x01, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x30, 0x00, 0x43, 0x54, 0x41, 0x42, // ..P.......0.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, // ............D...
	0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, // `...........t...
	0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, // ....s_texColor..
	0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, // u_imageLodEnable
	0x64, 0x00, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, // d...............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x01, 0x00, 0x0f, 0xa0, 0xcd, 0xcc, 0x4c, 0x3f, 0xcd, 0xcc, 0x4c, 0x3e, 0x00, 0x00, 0x00, 0x00, // ......L?..L>....
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, // ................
	0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x01, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, // ................
	0x00, 0x00, 0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, // ...._...........
	0x00, 0x08, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, // ................
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, // ..........U.....
	0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x55, 0xa0, // ......U.......U.
	0xff, 0xff, 0x00, 0x00, 0x00,                                                                   // .....
};
static const uint8_t fs_imgui_cubemap_dx11[424] =
{
	0x46, 0x53, 0x48, 0x03, 0xe3, 0xc2, 0x5c, 0x65, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH....e...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x15, 0x00, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x80, 0x01, 0x44, 0x58, 0x42, 0x43, 0x3a, 0x0c, 0x3f, 0xee, 0x22, 0x31, 0x60, 0x3f, // ....DXBC:.?."1`?
	0x80, 0x4a, 0x2e, 0x3f, 0xcb, 0x18, 0x1c, 0x94, 0x01, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, // .J.?............
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, // ....,...........
	0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNL...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........D.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4e, 0x4f, 0x52, 0x4d, // SV_POSITION.NORM
	0x41, 0x4c, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // AL..OSGN,.......
	0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .... ...........
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, // ............SV_T
	0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xc4, 0x00, 0x00, 0x00, // ARGET...SHDR....
	0x40, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, // @...1...Y...F. .
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, // ........Z....`..
	0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....X0...p......
	0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // UU..b...r.......
	0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, // e.... ......h...
	0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....H...........
	0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // F.......F~......
	0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // .`........ .....
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6...r ......
	0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x82, 0x20, 0x10, 0x00, // F.......2.... ..
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... .........
	0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3e, // .@....L?.@....L>
	0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,                                                 // >.......
};
