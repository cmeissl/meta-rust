# Specifics for Rust 1.26.0

SRC_URI += " \
	https://static.rust-lang.org/dist/rustc-${PV}-src.tar.gz;name=rust \
"

SRC_URI[md5sum] = "30fd947431b5d98260b8f1ebeec0eaa0"
SRC_URI[sha256sum] = "4fb09bc4e233b71dcbe08a37a3f38cabc32219745ec6a628b18a55a1232281dd"
SRC_URI[rust.md5sum] = "30fd947431b5d98260b8f1ebeec0eaa0"
SRC_URI[rust.sha256sum] = "4fb09bc4e233b71dcbe08a37a3f38cabc32219745ec6a628b18a55a1232281dd"


# later versions of rust change the directory that they unextract to
RUSTSRC = "${WORKDIR}/rustc-${PV}-src"
# set this as our default
S = "${RUSTSRC}"

LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=99c369ad81a36cd5b27f6c6968d01055"
