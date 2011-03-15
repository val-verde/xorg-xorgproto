
if ENABLE_SPECS
if HAVE_ASCIIDOC

doc_DATA = XI2proto.html
dist_doc_DATA = XI2proto.txt

%.html: %.txt
	$(AM_V_GEN)$(ASCIIDOC) -o $@ $<

CLEANFILES = $(doc_DATA)

EXTRA_DIST = XIproto.txt

endif
endif
