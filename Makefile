.PHONY: clean All

All:
	@echo "----------Building project:[ PrimitiveType - Debug ]----------"
	@cd "PrimitiveType" && "$(MAKE)" -f  "PrimitiveType.mk"
clean:
	@echo "----------Cleaning project:[ PrimitiveType - Debug ]----------"
	@cd "PrimitiveType" && "$(MAKE)" -f  "PrimitiveType.mk" clean
