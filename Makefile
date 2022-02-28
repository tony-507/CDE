module=TonyCDE

build:
	cmake ..
	cmake --build .

dev: Dockerfile.base.dev
	docker build . -f Dockerfile.base.dev -t tony57/base

prod: Dockerfile.base.prod
	docker build . -f Dockerfile.base.prod -t tony57/base
