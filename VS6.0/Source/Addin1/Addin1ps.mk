
Addin1ps.dll: dlldata.obj Addin1_p.obj Addin1_i.obj
	link /dll /out:Addin1ps.dll /def:Addin1ps.def /entry:DllMain dlldata.obj Addin1_p.obj Addin1_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Addin1ps.dll
	@del Addin1ps.lib
	@del Addin1ps.exp
	@del dlldata.obj
	@del Addin1_p.obj
	@del Addin1_i.obj
