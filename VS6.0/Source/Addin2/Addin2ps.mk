
Addin2ps.dll: dlldata.obj Addin2_p.obj Addin2_i.obj
	link /dll /out:Addin2ps.dll /def:Addin2ps.def /entry:DllMain dlldata.obj Addin2_p.obj Addin2_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Addin2ps.dll
	@del Addin2ps.lib
	@del Addin2ps.exp
	@del dlldata.obj
	@del Addin2_p.obj
	@del Addin2_i.obj
